
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct opal_dev {size_t pos; int * cmd; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct opal_dev*,int,int,size_t) ;
 int FUNC_1 (struct opal_dev*,int,int,size_t) ;
 int FUNC_2 (int*,struct opal_dev*,size_t) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static u8 *FUNC_4(int *VAR_1, struct opal_dev *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 1;
 bool VAR_5 = 1;

 if (VAR_3 & ~VAR_0) {
  VAR_4 = 2;
  VAR_5 = 0;
 }

 if (!FUNC_2(VAR_1, VAR_2, VAR_4 + VAR_3)) {
  FUNC_3("Error adding bytestring: end of buffer.\n");
  return ((void*)0);
 }

 if (VAR_5)
  FUNC_1(VAR_2, 1, 0, VAR_3);
 else
  FUNC_0(VAR_2, 1, 0, VAR_3);

 return &VAR_2->cmd[VAR_2->pos];
}
