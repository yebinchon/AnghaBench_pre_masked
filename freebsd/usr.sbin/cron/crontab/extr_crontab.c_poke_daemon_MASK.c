
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,struct timeval*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static void
FUNC_4() {
 if (FUNC_1(VAR_1, ((void*)0)) < VAR_0) {
  FUNC_3("can't update mtime on spooldir %s", VAR_1);
  return;
 }

}
