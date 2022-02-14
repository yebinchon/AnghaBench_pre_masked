
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef int u32 ;
struct rbd_image_snap_ondisk {int dummy; } ;
struct rbd_image_header_ondisk {int snap_count; int snap_names_len; } ;
struct rbd_device {int header_oloc; int header_oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rbd_image_header_ondisk*) ;
 struct rbd_image_header_ondisk* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct rbd_image_header_ondisk*) ;
 int FUNC_5 (struct rbd_device*,struct rbd_image_header_ondisk*) ;
 int FUNC_6 (struct rbd_device*,int *,int *,struct rbd_image_header_ondisk*,size_t) ;
 int FUNC_7 (struct rbd_device*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct rbd_device *VAR_3)
{
 struct rbd_image_header_ondisk *VAR_4 = ((void*)0);
 u32 VAR_5 = 0;
 u64 VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;
 do {
  size_t VAR_9;

  FUNC_0(VAR_4);

  VAR_9 = sizeof (*VAR_4);
  VAR_9 += VAR_5 * sizeof (struct rbd_image_snap_ondisk);
  VAR_9 += VAR_6;
  VAR_4 = FUNC_1(VAR_9, VAR_2);
  if (!VAR_4)
   return -VAR_0;

  VAR_8 = FUNC_6(VAR_3, &VAR_3->header_oid,
     &VAR_3->header_oloc, VAR_4, VAR_9);
  if (VAR_8 < 0)
   goto out;
  if ((size_t)VAR_8 < VAR_9) {
   VAR_8 = -VAR_1;
   FUNC_7(VAR_3, "short header read (want %zd got %d)",
    VAR_9, VAR_8);
   goto out;
  }
  if (!FUNC_4(VAR_4)) {
   VAR_8 = -VAR_1;
   FUNC_7(VAR_3, "invalid header");
   goto out;
  }

  VAR_6 = FUNC_3(VAR_4->snap_names_len);
  VAR_7 = VAR_5;
  VAR_5 = FUNC_2(VAR_4->snap_count);
 } while (VAR_5 != VAR_7);

 VAR_8 = FUNC_5(VAR_3, VAR_4);
out:
 FUNC_0(VAR_4);

 return VAR_8;
}
