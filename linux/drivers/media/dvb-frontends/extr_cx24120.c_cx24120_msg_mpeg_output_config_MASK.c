
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cx24120_state {TYPE_1__* config; } ;
struct cx24120_initial_mpeg_config {int x1; int x2; int x3; } ;
struct cx24120_cmd {int len; int* arg; int id; } ;
struct TYPE_2__ {struct cx24120_initial_mpeg_config initial_mpeg_config; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx24120_state*,struct cx24120_cmd*) ;

__attribute__((used)) static int FUNC_1(struct cx24120_state *VAR_1, u8 VAR_2)
{
 struct cx24120_cmd VAR_3;
 struct cx24120_initial_mpeg_config VAR_4 =
   VAR_1->config->initial_mpeg_config;

 VAR_3.id = VAR_0;
 VAR_3.len = 7;
 VAR_3.arg[0] = VAR_2;
 VAR_3.arg[1] = ((VAR_4.x1 & 0x01) << 1) | ((VAR_4.x1 >> 1) & 0x01);
 VAR_3.arg[2] = 0x05;
 VAR_3.arg[3] = 0x02;
 VAR_3.arg[4] = ((VAR_4.x2 >> 1) & 0x01);
 VAR_3.arg[5] = (VAR_4.x2 & 0xf0) | (VAR_4.x3 & 0x0f);
 VAR_3.arg[6] = 0x10;

 return FUNC_0(VAR_1, &VAR_3);
}
