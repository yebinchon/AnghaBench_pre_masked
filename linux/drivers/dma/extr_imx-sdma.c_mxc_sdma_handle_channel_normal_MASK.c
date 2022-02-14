
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdma_channel {int status; TYPE_1__* desc; } ;
struct TYPE_4__ {int status; scalar_t__ count; } ;
struct sdma_buffer_descriptor {TYPE_2__ mode; } ;
struct TYPE_3__ {int num_bd; scalar_t__ chn_real_count; struct sdma_buffer_descriptor* bd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct sdma_channel *VAR_5)
{
 struct sdma_channel *VAR_6 = (struct sdma_channel *) VAR_5;
 struct sdma_buffer_descriptor *VAR_7;
 int VAR_8, VAR_9 = 0;

 VAR_6->desc->chn_real_count = 0;




 for (VAR_8 = 0; VAR_8 < VAR_6->desc->num_bd; VAR_8++) {
  VAR_7 = &VAR_6->desc->bd[VAR_8];

   if (VAR_7->mode.status & (VAR_0 | VAR_1))
   VAR_9 = -VAR_4;
   VAR_6->desc->chn_real_count += VAR_7->mode.count;
 }

 if (VAR_9)
  VAR_6->status = VAR_3;
 else
  VAR_6->status = VAR_2;
}
