
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc_play_track {int start_track; int start_index; int end_track; int end_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct ioc_play_track*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct ioc_play_track VAR_6;

 VAR_6.start_track = VAR_2;
 VAR_6.start_index = VAR_3;
 VAR_6.end_track = VAR_4;
 VAR_6.end_index = VAR_5;

 return FUNC_0 (VAR_1, VAR_0, &VAR_6);
}
