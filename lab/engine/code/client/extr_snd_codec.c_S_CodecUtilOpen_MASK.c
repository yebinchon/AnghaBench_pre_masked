
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ file; int * codec; } ;
typedef TYPE_1__ snd_stream_t ;
typedef int snd_codec_t ;
typedef scalar_t__ fileHandle_t ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,scalar_t__*,int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;

snd_stream_t *FUNC_4(const char *VAR_1, snd_codec_t *VAR_2)
{
 snd_stream_t *VAR_3;
 fileHandle_t VAR_4;
 int VAR_5;


 VAR_5 = FUNC_2(VAR_1, &VAR_4, VAR_0);
 if(!VAR_4)
 {
  FUNC_0("Can't read sound file %s\n", VAR_1);
  return ((void*)0);
 }


 VAR_3 = FUNC_3(sizeof(snd_stream_t));
 if(!VAR_3)
 {
  FUNC_1(VAR_4);
  return ((void*)0);
 }


 VAR_3->codec = VAR_2;
 VAR_3->file = VAR_4;
 VAR_3->length = VAR_5;
 return VAR_3;
}
