
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_request {int retval; int id; int done; } ;
struct uinput_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uinput_device*,int ) ;
 int FUNC_1 (struct uinput_device*,struct uinput_request*) ;
 int FUNC_2 (struct uinput_device*,struct uinput_request*) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(struct uinput_device *VAR_2,
     struct uinput_request *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 if (VAR_4)
  goto out;

 if (!FUNC_3(&VAR_3->done, 30 * VAR_1)) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = VAR_3->retval;

 out:
 FUNC_0(VAR_2, VAR_3->id);
 return VAR_4;
}
