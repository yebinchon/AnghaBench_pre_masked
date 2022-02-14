
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pcre_uchar ;
struct TYPE_3__ {int const* start_pattern; } ;
typedef TYPE_1__ compile_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static pcre_uchar *
FUNC_1(pcre_uchar *VAR_2, const pcre_uchar *VAR_3, compile_data *VAR_4)
{
*VAR_2++ = VAR_1;
*VAR_2++ = 255;
FUNC_0(VAR_2, 0, (int)(VAR_3 - VAR_4->start_pattern));
FUNC_0(VAR_2, VAR_0, 0);
return VAR_2 + 2 * VAR_0;
}
