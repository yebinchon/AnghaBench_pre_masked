
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhid_event {int type; } ;
struct uhid_device {int qlock; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct uhid_event* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uhid_device*,struct uhid_event*) ;

__attribute__((used)) static int FUNC_4(struct uhid_device *VAR_2, __u32 VAR_3)
{
 unsigned long VAR_4;
 struct uhid_event *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->type = VAR_3;

 FUNC_1(&VAR_2->qlock, VAR_4);
 FUNC_3(VAR_2, VAR_5);
 FUNC_2(&VAR_2->qlock, VAR_4);

 return 0;
}
