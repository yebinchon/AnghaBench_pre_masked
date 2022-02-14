
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* buf; } ;
struct TYPE_3__ {int size; } ;
struct xz_dec {scalar_t__ check_type; TYPE_2__ temp; TYPE_1__ index; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int ,int ) ;
 int FUNC_2 (scalar_t__*,int,int ) ;

__attribute__((used)) static enum xz_ret FUNC_3(struct xz_dec *VAR_4)
{
 if (!FUNC_1(VAR_4->temp.buf + 10, VAR_0, VAR_1))
  return VAR_2;

 if (FUNC_2(VAR_4->temp.buf + 4, 6, 0) != FUNC_0(VAR_4->temp.buf))
  return VAR_2;






 if ((VAR_4->index.size >> 2) != FUNC_0(VAR_4->temp.buf + 4))
  return VAR_2;

 if (VAR_4->temp.buf[8] != 0 || VAR_4->temp.buf[9] != VAR_4->check_type)
  return VAR_2;





 return VAR_3;
}
