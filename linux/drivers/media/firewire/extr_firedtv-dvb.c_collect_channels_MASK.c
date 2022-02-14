
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct firedtv {int * channel_pid; int channel_active; } ;


 scalar_t__ FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(struct firedtv *VAR_0, int *VAR_1, u16 VAR_2[])
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 16; VAR_3++)
  if (FUNC_0(VAR_3, &VAR_0->channel_active))
   VAR_2[VAR_4++] = VAR_0->channel_pid[VAR_3];
 *VAR_1 = VAR_4;
}
