
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int lo_lock; scalar_t__ lo_backing_file; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (char*) ;
 char* FUNC_2 (scalar_t__,char*,scalar_t__) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct loop_device *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 char *VAR_4 = ((void*)0);

 FUNC_4(&VAR_1->lo_lock);
 if (VAR_1->lo_backing_file)
  VAR_4 = FUNC_2(VAR_1->lo_backing_file, VAR_2, VAR_0 - 1);
 FUNC_5(&VAR_1->lo_lock);

 if (FUNC_0(VAR_4))
  VAR_3 = FUNC_1(VAR_4);
 else {
  VAR_3 = FUNC_6(VAR_4);
  FUNC_3(VAR_2, VAR_4, VAR_3);
  VAR_2[VAR_3++] = '\n';
  VAR_2[VAR_3] = 0;
 }

 return VAR_3;
}
