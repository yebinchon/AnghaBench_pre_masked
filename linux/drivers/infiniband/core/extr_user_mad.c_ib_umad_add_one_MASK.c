
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umad_device {int * ports; int kref; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int *,struct ib_umad_device*) ;
 int FUNC_1 (struct ib_umad_device*) ;
 scalar_t__ FUNC_2 (struct ib_device*,int,struct ib_umad_device*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct ib_umad_device* FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct ib_device*,int) ;
 int FUNC_7 (struct ib_device*) ;
 int FUNC_8 (struct ib_device*) ;
 int FUNC_9 (struct ib_umad_device*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10(struct ib_device *VAR_3)
{
 struct ib_umad_device *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_8(VAR_3);
 VAR_6 = FUNC_7(VAR_3);

 VAR_4 = FUNC_5(FUNC_9(VAR_4, VAR_1, VAR_6 - VAR_5 + 1), VAR_0);
 if (!VAR_4)
  return;

 FUNC_4(&VAR_4->kref);
 for (VAR_7 = VAR_5; VAR_7 <= VAR_6; ++VAR_7) {
  if (!FUNC_6(VAR_3, VAR_7))
   continue;

  if (FUNC_2(VAR_3, VAR_7, VAR_4,
          &VAR_4->ports[VAR_7 - VAR_5]))
   goto err;

  VAR_8++;
 }

 if (!VAR_8)
  goto free;

 FUNC_0(VAR_3, &VAR_2, VAR_4);

 return;

err:
 while (--VAR_7 >= VAR_5) {
  if (!FUNC_6(VAR_3, VAR_7))
   continue;

  FUNC_3(&VAR_4->ports[VAR_7 - VAR_5]);
 }
free:

 FUNC_1(VAR_4);
}
