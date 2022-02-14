
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {int vdev; } ;
struct port_buffer {int dummy; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (struct virtqueue*,struct port_buffer*) ;
 struct port_buffer* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct port_buffer*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned int FUNC_5(struct virtqueue *VAR_1, spinlock_t *VAR_2)
{
 struct port_buffer *VAR_3;
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = 0;
 do {
  VAR_3 = FUNC_1(VAR_1->vdev, VAR_0, 0);
  if (!VAR_3)
   break;

  FUNC_3(VAR_2);
  VAR_5 = FUNC_0(VAR_1, VAR_3);
  if (VAR_5 < 0) {
   FUNC_4(VAR_2);
   FUNC_2(VAR_3, 1);
   break;
  }
  VAR_4++;
  FUNC_4(VAR_2);
 } while (VAR_5 > 0);

 return VAR_4;
}
