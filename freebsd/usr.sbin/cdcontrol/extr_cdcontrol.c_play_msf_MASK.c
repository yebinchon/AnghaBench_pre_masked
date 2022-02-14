
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc_play_msf {int start_m; int start_s; int start_f; int end_m; int end_s; int end_f; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3, int VAR_4,
 int VAR_5, int VAR_6, int VAR_7)
{
 struct ioc_play_msf VAR_8;

 VAR_8.start_m = VAR_2;
 VAR_8.start_s = VAR_3;
 VAR_8.start_f = VAR_4;
 VAR_8.end_m = VAR_5;
 VAR_8.end_s = VAR_6;
 VAR_8.end_f = VAR_7;

 return FUNC_0 (VAR_1, VAR_0, (char *) &VAR_8);
}
