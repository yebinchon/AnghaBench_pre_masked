
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbd_spec {int image_id; int image_name; } ;
struct rbd_device {int image_format; int header_oid; struct rbd_spec* spec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rbd_device *VAR_3)
{
 struct rbd_spec *VAR_4 = VAR_3->spec;
 int VAR_5;



 FUNC_1(FUNC_2(VAR_3->image_format));
 if (VAR_3->image_format == 1)
  VAR_5 = FUNC_0(&VAR_3->header_oid, VAR_0, "%s%s",
           VAR_4->image_name, VAR_2);
 else
  VAR_5 = FUNC_0(&VAR_3->header_oid, VAR_0, "%s%s",
           VAR_1, VAR_4->image_id);

 return VAR_5;
}
