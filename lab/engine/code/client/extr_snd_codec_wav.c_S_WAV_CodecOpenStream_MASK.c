
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int info; int file; } ;
typedef TYPE_1__ snd_stream_t ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* FUNC_1 (char const*,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_0 ;

snd_stream_t *FUNC_3(const char *VAR_1)
{
 snd_stream_t *VAR_2;


 VAR_2 = FUNC_1(VAR_1, &VAR_0);
 if(!VAR_2)
  return ((void*)0);


 if(!FUNC_2(VAR_2->file, &VAR_2->info))
 {
  FUNC_0(&VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
