
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_msg {size_t nm_size; TYPE_1__* nm_nlh; } ;
struct TYPE_2__ {size_t nlmsg_len; } ;


 int FUNC_0 (int,char*,struct nl_msg*,size_t,int,size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

void *FUNC_2(struct nl_msg *VAR_0, size_t VAR_1, int VAR_2)
{
 void *VAR_3 = VAR_0->nm_nlh;
 size_t VAR_4 = VAR_0->nm_nlh->nlmsg_len;
 size_t VAR_5;

 VAR_5 = VAR_2 ? ((VAR_1 + (VAR_2 - 1)) & ~(VAR_2 - 1)) : VAR_1;

 if ((VAR_5 + VAR_4) > VAR_0->nm_size)
  return ((void*)0);

 VAR_3 += VAR_4;
 VAR_0->nm_nlh->nlmsg_len += VAR_5;

 if (VAR_5 > VAR_1)
  FUNC_1(VAR_3 + VAR_1, 0, VAR_5 - VAR_1);

 FUNC_0(2, "msg %p: Reserved %zu bytes, pad=%d, nlmsg_len=%d\n",
    VAR_0, VAR_1, VAR_2, VAR_0->nm_nlh->nlmsg_len);

 return VAR_3;
}
