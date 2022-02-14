
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queued {int data; int (* f ) (int ) ;} ;
typedef scalar_t__ gpointer ;
typedef int gboolean ;


 int VAR_0 ;
 int FUNC_0 (struct queued*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static gboolean FUNC_2(gpointer VAR_1)
{
 struct queued *VAR_2 = (struct queued *) VAR_1;

 (*(VAR_2->f))(VAR_2->data);
 FUNC_0(VAR_2);
 return VAR_0;
}
