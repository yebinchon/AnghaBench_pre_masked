
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; } ;
struct TYPE_2__ {int offset; int length; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static inline void FUNC_1(struct urb *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 FUNC_0("len %d mtu %d", VAR_2, VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_2 >= VAR_3;
     VAR_4++, VAR_5 += VAR_3, VAR_2 -= VAR_3) {
  VAR_1->iso_frame_desc[VAR_4].offset = VAR_5;
  VAR_1->iso_frame_desc[VAR_4].length = VAR_3;
 }

 if (VAR_2 && VAR_4 < VAR_0) {
  VAR_1->iso_frame_desc[VAR_4].offset = VAR_5;
  VAR_1->iso_frame_desc[VAR_4].length = VAR_2;
  VAR_4++;
 }

 VAR_1->number_of_packets = VAR_4;
}
