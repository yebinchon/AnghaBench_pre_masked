
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hid_device {unsigned long product; unsigned int maxcollection; TYPE_1__* collection; } ;
struct TYPE_2__ {unsigned int usage; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct hid_device*,char*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct hid_device *VAR_5)
{
 unsigned VAR_6, VAR_7;
 unsigned long VAR_8 = VAR_5->product;


 if (VAR_8 >= VAR_2 && VAR_8 <= VAR_1)
  goto exit;


 for (VAR_6 = 0; VAR_6 < VAR_5->maxcollection; VAR_6++) {
  VAR_7 = VAR_5->collection[VAR_6].usage & VAR_0;
  if (VAR_7 == VAR_4) {
   VAR_8 = VAR_5->collection[VAR_6].usage;
   break;
  }
  if (VAR_7 == VAR_3)
   VAR_8 = VAR_5->collection[VAR_6].usage;
 }

exit:
 FUNC_0(VAR_5, "plt_type decoded as: %08lx\n", VAR_8);
 return VAR_8;
}
