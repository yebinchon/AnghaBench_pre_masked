
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_req_iter {scalar_t__ end; scalar_t__ cur; } ;
struct TYPE_2__ {size_t inlen; scalar_t__ inbuf; } ;
struct uverbs_attr_bundle {TYPE_1__ ucore; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_1(struct uverbs_attr_bundle *VAR_2,
    struct uverbs_req_iter *VAR_3,
    void *VAR_4,
    size_t VAR_5)
{
 if (VAR_2->ucore.inlen < VAR_5)
  return -VAR_1;

 if (FUNC_0(VAR_4, VAR_2->ucore.inbuf, VAR_5))
  return -VAR_0;

 VAR_3->cur = VAR_2->ucore.inbuf + VAR_5;
 VAR_3->end = VAR_2->ucore.inbuf + VAR_2->ucore.inlen;
 return 0;
}
