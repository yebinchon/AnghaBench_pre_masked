
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
typedef int time_t ;
struct stat {int st_mtime; } ;
struct rerere_id {int dummy; } ;


 int FUNC_0 (struct rerere_id*,char*) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;

__attribute__((used)) static timestamp_t FUNC_2(struct rerere_id *VAR_0)
{
 struct stat VAR_1;

 return FUNC_1(FUNC_0(VAR_0, "postimage"), &VAR_1) ? (time_t) 0 : VAR_1.st_mtime;
}
