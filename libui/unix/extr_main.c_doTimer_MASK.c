
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer {int data; int (* f ) (int ) ;} ;
typedef scalar_t__ gpointer ;
typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timer*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct timer*) ;

__attribute__((used)) static gboolean FUNC_3(gpointer VAR_3)
{
 struct timer *VAR_4 = (struct timer *) VAR_3;

 if (!(*(VAR_4->f))(VAR_4->data)) {
  FUNC_0(VAR_2, VAR_4);
  FUNC_2(VAR_4);
  return VAR_0;
 }
 return VAR_1;
}
