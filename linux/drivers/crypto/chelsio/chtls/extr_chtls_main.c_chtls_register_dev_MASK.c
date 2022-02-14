
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tls_device {int kref; int release; int unhash; int hash; int feature; int name; } ;
struct chtls_dev {int cdev_state; TYPE_2__* lldi; struct tls_device tlsdev; } ;
struct TYPE_4__ {TYPE_1__** ports; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct tls_device*) ;

__attribute__((used)) static void FUNC_4(struct chtls_dev *VAR_6)
{
 struct tls_device *VAR_7 = &VAR_6->tlsdev;

 FUNC_2(VAR_7->name, "chtls", VAR_1);
 FUNC_1(VAR_7->name, VAR_6->lldi->ports[0]->name,
  VAR_1);
 VAR_7->feature = VAR_5;
 VAR_7->hash = VAR_2;
 VAR_7->unhash = VAR_3;
 VAR_7->release = VAR_4;
 FUNC_0(&VAR_7->kref);
 FUNC_3(VAR_7);
 VAR_6->cdev_state = VAR_0;
}
