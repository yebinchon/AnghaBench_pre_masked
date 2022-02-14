
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 struct pktcdvd_device** VAR_1 ;

__attribute__((used)) static struct pktcdvd_device *FUNC_1(unsigned int VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_2, VAR_0);
 return VAR_1[VAR_2];
}
