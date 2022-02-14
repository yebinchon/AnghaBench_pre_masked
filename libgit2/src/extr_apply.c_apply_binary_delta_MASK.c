
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ inflatedlen; scalar_t__ type; int datalen; int data; } ;
typedef TYPE_1__ git_diff_binary_file ;
struct TYPE_12__ {scalar_t__ size; size_t asize; void* ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char const*,size_t) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (void**,size_t*,void*,size_t,void*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_6(
 git_buf *VAR_3,
 const char *VAR_4,
 size_t VAR_5,
 git_diff_binary_file *VAR_6)
{
 git_buf VAR_7 = VAR_0;
 int VAR_8 = 0;


 if (VAR_6->datalen == 0)
  return FUNC_2(VAR_3, VAR_4, VAR_5);

 VAR_8 = FUNC_5(&VAR_7,
  VAR_6->data, VAR_6->datalen);

 if (!VAR_8 && VAR_7.size != VAR_6->inflatedlen) {
  VAR_8 = FUNC_0("inflated delta does not match expected length");
  FUNC_1(VAR_3);
 }

 if (VAR_8 < 0)
  goto done;

 if (VAR_6->type == VAR_1) {
  void *VAR_9;
  size_t VAR_10;

  VAR_8 = FUNC_4(&VAR_9, &VAR_10, (void *)VAR_4, VAR_5,
   (void *)VAR_7.ptr, VAR_7.size);

  VAR_3->ptr = VAR_9;
  VAR_3->size = VAR_10;
  VAR_3->asize = VAR_10;
 }
 else if (VAR_6->type == VAR_2) {
  FUNC_3(VAR_3, &VAR_7);
 }
 else {
  VAR_8 = FUNC_0("unknown binary delta type");
  goto done;
 }

done:
 FUNC_1(&VAR_7);
 return VAR_8;
}
