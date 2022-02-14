
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int width; int channels; } ;
struct TYPE_5__ {int pos; TYPE_1__ info; int file; } ;
typedef TYPE_2__ snd_stream_t ;


 int FUNC_0 (void*,int,int ) ;
 int FUNC_1 (int,int,int,void*) ;

int FUNC_2(snd_stream_t *VAR_0, int VAR_1, void *VAR_2)
{
 int VAR_3 = VAR_0->info.size - VAR_0->pos;
 int VAR_4;

 if(VAR_3 <= 0)
  return 0;
 if(VAR_1 > VAR_3)
  VAR_1 = VAR_3;
 VAR_0->pos += VAR_1;
 VAR_4 = (VAR_1 / VAR_0->info.width) / VAR_0->info.channels;
 FUNC_0(VAR_2, VAR_1, VAR_0->file);
 FUNC_1(VAR_4, VAR_0->info.width, VAR_0->info.channels, VAR_2);
 return VAR_1;
}
