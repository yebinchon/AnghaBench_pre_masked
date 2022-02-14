
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int type; int size; } ;
typedef TYPE_1__ obj_hdr ;
struct TYPE_13__ {int data; int type; int len; } ;
typedef TYPE_2__ git_rawobj ;
struct TYPE_14__ {size_t size; scalar_t__ ptr; } ;
typedef TYPE_3__ git_buf ;


 scalar_t__ FUNC_0 (size_t*,int ,int) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,size_t) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,unsigned char const*,size_t) ;
 int FUNC_7 (TYPE_1__*,size_t*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_8(git_rawobj *VAR_2, git_buf *VAR_3)
{
 git_buf VAR_4 = VAR_0;
 const unsigned char *VAR_5;
 obj_hdr VAR_6;
 size_t VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = (unsigned char *)VAR_3->ptr;
 VAR_7 = VAR_3->size;





 if ((VAR_10 = FUNC_7(&VAR_6, &VAR_8, VAR_5, VAR_7)) < 0)
  goto done;

 if (!FUNC_5(VAR_6.type) || VAR_8 > VAR_7) {
  FUNC_4(VAR_1, "failed to inflate loose object");
  VAR_10 = -1;
  goto done;
 }

 VAR_5 += VAR_8;
 VAR_7 -= VAR_8;




 if (FUNC_0(&VAR_9, VAR_6.size, 1) ||
  FUNC_3(&VAR_4, VAR_9) < 0) {
  VAR_10 = -1;
  goto done;
 }

 if ((VAR_10 = FUNC_6(&VAR_4, VAR_5, VAR_7)) < 0)
  goto done;

 VAR_2->len = VAR_6.size;
 VAR_2->type = VAR_6.type;
 VAR_2->data = FUNC_1(&VAR_4);

done:
 FUNC_2(&VAR_4);
 return VAR_10;
}
