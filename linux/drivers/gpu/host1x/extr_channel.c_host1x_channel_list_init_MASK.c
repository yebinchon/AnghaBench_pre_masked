
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_channel_list {void* allocated_channels; void* channels; } ;
struct host1x_channel {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,unsigned int) ;
 void* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (void*) ;

int FUNC_4(struct host1x_channel_list *VAR_2,
        unsigned int VAR_3)
{
 VAR_2->channels = FUNC_2(VAR_3, sizeof(struct host1x_channel),
       VAR_1);
 if (!VAR_2->channels)
  return -VAR_0;

 VAR_2->allocated_channels =
  FUNC_2(FUNC_0(VAR_3), sizeof(unsigned long),
   VAR_1);
 if (!VAR_2->allocated_channels) {
  FUNC_3(VAR_2->channels);
  return -VAR_0;
 }

 FUNC_1(VAR_2->allocated_channels, VAR_3);

 return 0;
}
