
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct matrix_keypad_platform_data {int num_col_gpios; int num_row_gpios; scalar_t__ clustered_irq; int clustered_irq_flags; int * col_gpios; int * row_gpios; int active_low; } ;
struct matrix_keypad {struct matrix_keypad_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct matrix_keypad*) ;
 int FUNC_2 (scalar_t__,struct matrix_keypad*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (scalar_t__,int ,int,char*,struct matrix_keypad*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3,
       struct matrix_keypad *VAR_4)
{
 const struct matrix_keypad_platform_data *VAR_5 = VAR_4->pdata;
 int VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_5->num_col_gpios; VAR_6++) {
  VAR_7 = FUNC_6(VAR_5->col_gpios[VAR_6], "matrix_kbd_col");
  if (VAR_7) {
   FUNC_0(&VAR_3->dev,
    "failed to request GPIO%d for COL%d\n",
    VAR_5->col_gpios[VAR_6], VAR_6);
   goto err_free_cols;
  }

  FUNC_4(VAR_5->col_gpios[VAR_6], !VAR_5->active_low);
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->num_row_gpios; VAR_6++) {
  VAR_7 = FUNC_6(VAR_5->row_gpios[VAR_6], "matrix_kbd_row");
  if (VAR_7) {
   FUNC_0(&VAR_3->dev,
    "failed to request GPIO%d for ROW%d\n",
    VAR_5->row_gpios[VAR_6], VAR_6);
   goto err_free_rows;
  }

  FUNC_3(VAR_5->row_gpios[VAR_6]);
 }

 if (VAR_5->clustered_irq > 0) {
  VAR_7 = FUNC_8(VAR_5->clustered_irq,
    VAR_2,
    VAR_5->clustered_irq_flags,
    "matrix-keypad", VAR_4);
  if (VAR_7 < 0) {
   FUNC_0(&VAR_3->dev,
    "Unable to acquire clustered interrupt\n");
   goto err_free_rows;
  }
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_5->num_row_gpios; VAR_6++) {
   VAR_7 = FUNC_8(
     FUNC_7(VAR_5->row_gpios[VAR_6]),
     VAR_2,
     VAR_1 |
     VAR_0,
     "matrix-keypad", VAR_4);
   if (VAR_7 < 0) {
    FUNC_0(&VAR_3->dev,
     "Unable to acquire interrupt for GPIO line %i\n",
     VAR_5->row_gpios[VAR_6]);
    goto err_free_irqs;
   }
  }
 }


 FUNC_1(VAR_4);
 return 0;

err_free_irqs:
 while (--VAR_6 >= 0)
  FUNC_2(FUNC_7(VAR_5->row_gpios[VAR_6]), VAR_4);
 VAR_6 = VAR_5->num_row_gpios;
err_free_rows:
 while (--VAR_6 >= 0)
  FUNC_5(VAR_5->row_gpios[VAR_6]);
 VAR_6 = VAR_5->num_col_gpios;
err_free_cols:
 while (--VAR_6 >= 0)
  FUNC_5(VAR_5->col_gpios[VAR_6]);

 return VAR_7;
}
