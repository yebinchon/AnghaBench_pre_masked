
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct direntry {int dummy; } ;
struct denode {int de_flag; } ;
struct buf {int dummy; } ;


 int FUNC_0 (struct direntry*,struct denode*) ;
 int VAR_0 ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct denode*,struct buf**,struct direntry**) ;

__attribute__((used)) static int
FUNC_3(struct denode *VAR_1)
{
 struct buf *VAR_2;
 struct direntry *VAR_3;
 int VAR_4;

 VAR_1->de_flag &= ~VAR_0;
 VAR_4 = FUNC_2(VAR_1, &VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_0(VAR_3, VAR_1);
 VAR_4 = FUNC_1(VAR_2);
 return VAR_4;
}
