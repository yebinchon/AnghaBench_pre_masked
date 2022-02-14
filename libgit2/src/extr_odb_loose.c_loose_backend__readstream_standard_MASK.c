
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int type; } ;
typedef TYPE_2__ obj_hdr ;
struct TYPE_7__ {int len; int data; } ;
struct TYPE_9__ {size_t start_len; int start; int zstream; TYPE_1__ map; } ;
typedef TYPE_3__ loose_readstream ;
typedef int head ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char*,size_t*,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,unsigned char*,size_t) ;
 int FUNC_5 (TYPE_2__*,size_t*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_6(
 obj_hdr *VAR_2,
 loose_readstream *VAR_3)
{
 unsigned char VAR_4[VAR_1];
 size_t VAR_5, VAR_6;
 int VAR_7;

 if ((VAR_7 = FUNC_3(&VAR_3->zstream,
   VAR_3->map.data, VAR_3->map.len)) < 0)
  return VAR_7;

 VAR_5 = sizeof(VAR_4);






 if ((VAR_7 = FUNC_2(VAR_4, &VAR_5, &VAR_3->zstream)) < 0 ||
  (VAR_7 = FUNC_5(VAR_2, &VAR_6, VAR_4, VAR_5)) < 0)
  return VAR_7;

 if (!FUNC_1(VAR_2->type)) {
  FUNC_0(VAR_0, "failed to inflate disk object");
  return -1;
 }

 if (VAR_5 > VAR_6) {
  VAR_3->start_len = VAR_5 - VAR_6;
  FUNC_4(VAR_3->start, VAR_4 + VAR_6, VAR_5 - VAR_6);
 }

 return 0;
}
