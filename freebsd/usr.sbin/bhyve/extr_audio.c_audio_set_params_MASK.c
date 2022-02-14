
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audio_params {int fd; int inited; int format; int channels; int rate; scalar_t__ dir; int dev_name; } ;
struct audio {int fd; int inited; int format; int channels; int rate; scalar_t__ dir; int dev_name; } ;
typedef int audio_buf_info ;


 int FUNC_0 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct audio_params*) ;
 int VAR_6 ;
 int FUNC_2 (int,int ,int*) ;

int
FUNC_3(struct audio *VAR_7, struct audio_params *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13;




 FUNC_1(VAR_7);
 FUNC_1(VAR_8);

 if ((VAR_9 = VAR_7->fd) < 0) {
  FUNC_0("Incorrect audio device descriptor for %s\n",
      VAR_7->dev_name);
  return (-1);
 }


 if (VAR_7->inited) {
  VAR_13 = FUNC_2(VAR_9, VAR_3, ((void*)0));
  if (VAR_13 == -1) {
   FUNC_0("Failed to reset fd: %d, errno: %d\n",
       VAR_7->fd, VAR_6);
   return (-1);
  }
 } else
  VAR_7->inited = 1;


 VAR_10 = VAR_8->format;
 VAR_13 = FUNC_2(VAR_9, VAR_4, &VAR_10);
 if (VAR_13 == -1) {
  FUNC_0("Fail to set fmt: 0x%x errno: %d\n",
      VAR_8->format, VAR_6);
  return -1;
 }


 if (VAR_10 != VAR_8->format) {
  FUNC_0("Mismatch format: 0x%x params->format: 0x%x\n",
      VAR_10, VAR_8->format);
  return -1;
 }


 VAR_11 = VAR_8->channels;
 VAR_13 = FUNC_2(VAR_9, VAR_0, &VAR_11);
 if (VAR_13 == -1) {
  FUNC_0("Fail to set channels: %d errno: %d\n",
      VAR_8->channels, VAR_6);
  return -1;
 }


 if (VAR_11 != VAR_8->channels) {
  FUNC_0("Mismatch channels: %d params->channels: %d\n",
      VAR_11, VAR_8->channels);
  return -1;
 }


 VAR_12 = VAR_8->rate;
 VAR_13 = FUNC_2(VAR_9, VAR_5, &VAR_12);
 if (VAR_13 == -1) {
  FUNC_0("Fail to set speed: %d errno: %d\n",
      VAR_8->rate, VAR_6);
  return -1;
 }


 if (VAR_12 != VAR_8->rate) {
  FUNC_0("Mismatch rate: %d params->rate: %d\n",
      VAR_12, VAR_8->rate);
  return -1;
 }
 return 0;
}
