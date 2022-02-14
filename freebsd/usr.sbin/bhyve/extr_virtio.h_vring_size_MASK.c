
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct virtio_used {int dummy; } ;
struct virtio_desc {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,int ) ;

__attribute__((used)) static inline size_t
FUNC_1(u_int VAR_1)
{
 size_t VAR_2;


 VAR_2 = sizeof(struct virtio_desc) * VAR_1 + sizeof(uint16_t) * (3 + VAR_1);
 VAR_2 = FUNC_0(VAR_2, VAR_0);


 VAR_2 += sizeof(uint16_t) * 3 + sizeof(struct virtio_used) * VAR_1;
 VAR_2 = FUNC_0(VAR_2, VAR_0);

 return (VAR_2);
}
