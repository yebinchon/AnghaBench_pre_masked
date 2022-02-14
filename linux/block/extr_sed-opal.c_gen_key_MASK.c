
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid ;
typedef int u8 ;
struct opal_dev {int * prev_data; int prev_d_len; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct opal_dev*,int *,int ) ;
 int FUNC_1 (struct opal_dev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct opal_dev *VAR_4, void *VAR_5)
{
 u8 VAR_6[VAR_1];
 int VAR_7;

 FUNC_3(VAR_6, VAR_4->prev_data, FUNC_4(sizeof(VAR_6), VAR_4->prev_d_len));
 FUNC_2(VAR_4->prev_data);
 VAR_4->prev_data = ((void*)0);

 VAR_7 = FUNC_0(VAR_4, VAR_6, VAR_2[VAR_0]);

 if (VAR_7) {
  FUNC_5("Error building gen key command\n");
  return VAR_7;

 }

 return FUNC_1(VAR_4, VAR_3);
}
