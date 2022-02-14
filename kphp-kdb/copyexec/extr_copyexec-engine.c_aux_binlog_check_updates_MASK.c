
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;

__attribute__((used)) static void FUNC_2 (void) {
  struct stat VAR_3;
  if (FUNC_1 (VAR_2, &VAR_3) >= 0 && VAR_3.st_size > VAR_0) {
    FUNC_0 (VAR_0, VAR_1);
  }
}
