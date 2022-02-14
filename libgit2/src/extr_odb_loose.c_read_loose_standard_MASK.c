
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; int type; } ;
typedef TYPE_1__ obj_hdr ;
typedef int head ;
typedef int git_zstream ;
struct TYPE_6__ {unsigned char* data; size_t len; int type; } ;
typedef TYPE_2__ git_rawobj ;
typedef int git_buf ;


 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (unsigned char*,size_t*,int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_14 (TYPE_1__*,size_t*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_15(git_rawobj *VAR_5, git_buf *VAR_6)
{
 git_zstream VAR_7 = VAR_3;
 unsigned char VAR_8[VAR_4], *VAR_9 = ((void*)0);
 size_t VAR_10, VAR_11, VAR_12, VAR_13;
 obj_hdr VAR_14;
 int VAR_15;

 if ((VAR_15 = FUNC_11(&VAR_7, VAR_2)) < 0 ||
  (VAR_15 = FUNC_12(&VAR_7, FUNC_4(VAR_6), FUNC_5(VAR_6))) < 0)
  goto done;

 VAR_10 = sizeof(VAR_8);






 if ((VAR_15 = FUNC_10(VAR_8, &VAR_10, &VAR_7)) < 0 ||
  (VAR_15 = FUNC_14(&VAR_14, &VAR_11, VAR_8, VAR_10)) < 0)
  goto done;

 if (!FUNC_7(VAR_14.type)) {
  FUNC_6(VAR_0, "failed to inflate disk object");
  VAR_15 = -1;
  goto done;
 }





 if (FUNC_0(&VAR_13, VAR_14.size, 1) ||
  (VAR_9 = FUNC_3(VAR_13)) == ((void*)0)) {
  VAR_15 = -1;
  goto done;
 }

 FUNC_1(VAR_10 >= VAR_11);
 VAR_12 = VAR_10 - VAR_11;

 if (VAR_12)
  FUNC_13(VAR_9, VAR_8 + VAR_11, VAR_12);

 VAR_10 = VAR_14.size - VAR_12;
 if ((VAR_15 = FUNC_10(VAR_9 + VAR_12, &VAR_10, &VAR_7)) < 0)
  goto done;

 if (!FUNC_8(&VAR_7)) {
  FUNC_6(VAR_1, "failed to finish zlib inflation: stream aborted prematurely");
  VAR_15 = -1;
  goto done;
 }

 VAR_9[VAR_14.size] = '\0';

 VAR_5->data = VAR_9;
 VAR_5->len = VAR_14.size;
 VAR_5->type = VAR_14.type;

done:
 if (VAR_15 < 0)
  FUNC_2(VAR_9);

 FUNC_9(&VAR_7);
 return VAR_15;
}
