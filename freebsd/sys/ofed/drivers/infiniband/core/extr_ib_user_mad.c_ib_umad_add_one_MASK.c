
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ib_umad_port {int dummy; } ;
struct ib_umad_device {int kobj; TYPE_1__* port; } ;
struct ib_device {int dummy; } ;
struct TYPE_3__ {struct ib_umad_device* umad_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,int *,struct ib_umad_device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ib_device*,int,struct ib_umad_device*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 struct ib_umad_device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ib_device*,int) ;
 int FUNC_7 (struct ib_device*) ;
 int FUNC_8 (struct ib_device*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_9(struct ib_device *VAR_3)
{
 struct ib_umad_device *VAR_4;
 int VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 VAR_5 = FUNC_8(VAR_3);
 VAR_6 = FUNC_7(VAR_3);

 VAR_4 = FUNC_5(sizeof *VAR_4 +
      (VAR_6 - VAR_5 + 1) * sizeof (struct ib_umad_port),
      VAR_0);
 if (!VAR_4)
  return;

 FUNC_3(&VAR_4->kobj, &VAR_1);

 for (VAR_7 = VAR_5; VAR_7 <= VAR_6; ++VAR_7) {
  if (!FUNC_6(VAR_3, VAR_7))
   continue;

  VAR_4->port[VAR_7 - VAR_5].umad_dev = VAR_4;

  if (FUNC_1(VAR_3, VAR_7, VAR_4,
          &VAR_4->port[VAR_7 - VAR_5]))
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

  FUNC_2(&VAR_4->port[VAR_7 - VAR_5]);
 }
free:
 FUNC_4(&VAR_4->kobj);
}
