
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_chan {scalar_t__ is_lite_channel; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static inline size_t FUNC_0(struct bcm2835_chan *VAR_2)
{

 return VAR_2->is_lite_channel ? VAR_1 : VAR_0;
}
