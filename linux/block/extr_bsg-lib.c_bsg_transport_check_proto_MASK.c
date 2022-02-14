
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_io_v4 {scalar_t__ protocol; scalar_t__ subprotocol; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sg_io_v4 *VAR_5)
{
 if (VAR_5->protocol != VAR_0 ||
     VAR_5->subprotocol != VAR_1)
  return -VAR_3;
 if (!FUNC_0(VAR_2))
  return -VAR_4;
 return 0;
}
