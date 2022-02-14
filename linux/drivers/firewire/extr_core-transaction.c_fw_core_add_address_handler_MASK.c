
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_address_region {int start; int end; } ;
struct fw_address_handler {int length; int offset; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 struct fw_address_handler* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct fw_address_handler *VAR_4,
    const struct fw_address_region *VAR_5)
{
 struct fw_address_handler *VAR_6;
 int VAR_7 = -VAR_0;

 if (VAR_5->start & 0xffff000000000003ULL ||
     VAR_5->start >= VAR_5->end ||
     VAR_5->end > 0x0001000000000000ULL ||
     VAR_4->length & 3 ||
     VAR_4->length == 0)
  return -VAR_1;

 FUNC_3(&VAR_3);

 VAR_4->offset = VAR_5->start;
 while (VAR_4->offset + VAR_4->length <= VAR_5->end) {
  if (FUNC_0(VAR_4->offset, VAR_4->length))
   VAR_6 = ((void*)0);
  else
   VAR_6 = FUNC_2
     (&VAR_2,
      VAR_4->offset, VAR_4->length);
  if (VAR_6 != ((void*)0)) {
   VAR_4->offset += VAR_6->length;
  } else {
   FUNC_1(&VAR_4->link, &VAR_2);
   VAR_7 = 0;
   break;
  }
 }

 FUNC_4(&VAR_3);

 return VAR_7;
}
