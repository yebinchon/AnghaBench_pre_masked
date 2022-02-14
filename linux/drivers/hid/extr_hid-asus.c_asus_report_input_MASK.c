
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct asus_drvdata {int input; TYPE_1__* tp; } ;
struct TYPE_2__ {int contact_size; int max_contacts; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct asus_drvdata*,int,int*) ;
 int FUNC_2 (struct asus_drvdata*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct asus_drvdata *VAR_5, u8 *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = VAR_3;
 u8 *VAR_10 = VAR_6 + 2;

 if (VAR_7 != 3 + VAR_5->tp->contact_size * VAR_5->tp->max_contacts)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_5->tp->max_contacts; VAR_8++) {
  bool VAR_11 = !!(VAR_6[1] & FUNC_0(VAR_8+3));

  if (VAR_5->tp->contact_size >= 5)
   VAR_9 = VAR_10[3] & VAR_2 ?
      VAR_4 : VAR_3;

  FUNC_4(VAR_5->input, VAR_8);
  FUNC_3(VAR_5->input, VAR_9, VAR_11);

  if (VAR_11) {
   FUNC_1(VAR_5, VAR_9, VAR_10);
   VAR_10 += VAR_5->tp->contact_size;
  }
 }

 FUNC_6(VAR_5->input, VAR_0, VAR_6[1] & VAR_1);
 FUNC_2(VAR_5);

 FUNC_5(VAR_5->input);
 FUNC_7(VAR_5->input);

 return 1;
}
