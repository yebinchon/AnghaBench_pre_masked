
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dev; } ;
struct cougar_shared {int list; struct hid_device* dev; int kref; } ;
struct cougar {struct cougar_shared* shared; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cougar_shared* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct cougar*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int (*) (struct cougar*),struct cougar*) ;
 int FUNC_3 (int *) ;
 struct cougar_shared* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_4,
       struct cougar *VAR_5)
{
 struct cougar_shared *VAR_6;
 int VAR_7 = 0;

 FUNC_6(&VAR_3);

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6) {
  VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
  if (!VAR_6) {
   VAR_7 = -VAR_0;
   goto out;
  }

  FUNC_3(&VAR_6->kref);
  VAR_6->dev = VAR_4;
  FUNC_5(&VAR_6->list, &VAR_2);
 }

 VAR_5->shared = VAR_6;

 VAR_7 = FUNC_2(&VAR_4->dev, FUNC_1, VAR_5);
 if (VAR_7) {
  FUNC_7(&VAR_3);
  FUNC_1(VAR_5);
  return VAR_7;
 }

out:
 FUNC_7(&VAR_3);
 return VAR_7;
}
