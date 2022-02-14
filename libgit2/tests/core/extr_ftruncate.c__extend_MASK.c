
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ git_off_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct stat*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(git_off_t VAR_1)
{
 struct stat VAR_2;
 int VAR_3;

 FUNC_0((VAR_3 = FUNC_2(VAR_0, VAR_1)) == 0);
 FUNC_0((VAR_3 = FUNC_1(VAR_0, &VAR_2)) == 0);
 FUNC_0(VAR_2.st_size == VAR_1);
}
