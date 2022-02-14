
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_v4 {scalar_t__ protocol; scalar_t__ subprotocol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct sg_io_v4 *VAR_3)
{
 if (VAR_3->protocol != VAR_0 ||
     VAR_3->subprotocol != VAR_1)
  return -VAR_2;
 return 0;
}
