
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct hci_dev {int name; } ;
struct btsdio_data {TYPE_1__* func; } ;
struct TYPE_7__ {scalar_t__ class; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct btsdio_data* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct hci_dev *VAR_4)
{
 struct btsdio_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 FUNC_0("%s", VAR_4->name);

 FUNC_2(VAR_5->func);

 VAR_6 = FUNC_5(VAR_5->func);
 if (VAR_6 < 0)
  goto release;

 VAR_6 = FUNC_3(VAR_5->func, VAR_3);
 if (VAR_6 < 0) {
  FUNC_4(VAR_5->func);
  goto release;
 }

 if (VAR_5->func->class == VAR_2)
  FUNC_7(VAR_5->func, 0x00, VAR_1, ((void*)0));

 FUNC_7(VAR_5->func, 0x01, VAR_0, ((void*)0));

release:
 FUNC_6(VAR_5->func);

 return VAR_6;
}
