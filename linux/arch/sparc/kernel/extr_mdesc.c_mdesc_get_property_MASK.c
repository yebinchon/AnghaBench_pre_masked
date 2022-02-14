
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_8__ {int node_sz; } ;
struct mdesc_handle {TYPE_3__ mdesc; } ;
struct TYPE_6__ {int data_len; int data_offset; } ;
struct TYPE_7__ {TYPE_1__ data; int val; } ;
struct mdesc_elem {int tag; int name_offset; TYPE_2__ d; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 void* FUNC_0 (TYPE_3__*) ;
 char* FUNC_1 (TYPE_3__*) ;
 struct mdesc_elem* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (char const*,char const*) ;

const void *FUNC_4(struct mdesc_handle *VAR_2, u64 VAR_3,
          const char *VAR_4, int *VAR_5)
{
 const char *VAR_6 = FUNC_1(&VAR_2->mdesc);
 u64 VAR_7 = VAR_2->mdesc.node_sz / 16;
 void *VAR_8 = FUNC_0(&VAR_2->mdesc);
 struct mdesc_elem *VAR_9;

 if (VAR_3 == VAR_0 || VAR_3 >= VAR_7)
  return ((void*)0);

 VAR_9 = FUNC_2(&VAR_2->mdesc) + VAR_3;
 VAR_9++;
 for (; VAR_9->tag != VAR_1; VAR_9++) {
  void *VAR_10 = ((void*)0);
  int VAR_11 = 0;

  switch (VAR_9->tag) {
  case 128:
   VAR_10 = &VAR_9->d.val;
   VAR_11 = 8;
   break;

  case 129:
  case 130:
   VAR_10 = VAR_8 + VAR_9->d.data.data_offset;
   VAR_11 = VAR_9->d.data.data_len;
   break;

  default:
   break;
  }
  if (!VAR_10)
   continue;

  if (!FUNC_3(VAR_6 + VAR_9->name_offset, VAR_4)) {
   if (VAR_5)
    *VAR_5 = VAR_11;
   return VAR_10;
  }
 }

 return ((void*)0);
}
