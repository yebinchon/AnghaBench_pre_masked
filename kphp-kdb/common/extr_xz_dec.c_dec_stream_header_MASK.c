
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* buf; } ;
struct xz_dec {scalar_t__ check_type; TYPE_1__ temp; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_2 (scalar_t__*,int,int ) ;

__attribute__((used)) static enum xz_ret FUNC_3(struct xz_dec *VAR_7)
{
 if (!FUNC_1(VAR_7->temp.buf, VAR_0, VAR_1))
  return VAR_4;

 if (FUNC_2(VAR_7->temp.buf + VAR_1, 2, 0)
   != FUNC_0(VAR_7->temp.buf + VAR_1 + 2))
  return VAR_3;

 if (VAR_7->temp.buf[VAR_1] != 0)
  return VAR_6;







 VAR_7->check_type = VAR_7->temp.buf[VAR_1 + 1];

 if (VAR_7->check_type > VAR_2)
  return VAR_6;

 return VAR_5;
}
