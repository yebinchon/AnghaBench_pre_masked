
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isns_req {int ir_usedlen; int * ir_buf; } ;
struct isns_hdr {int ih_length; int ih_flags; int ih_version; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct isns_req*,int) ;
 int FUNC_2 (int,int *,int) ;

int
FUNC_3(int VAR_3, struct isns_req *VAR_4)
{
 struct isns_hdr *VAR_5;
 ssize_t VAR_6, VAR_7;

 VAR_4->ir_usedlen = 0;
 FUNC_1(VAR_4, sizeof(*VAR_5));
 VAR_6 = FUNC_2(VAR_3, VAR_4->ir_buf, sizeof(*VAR_5));
 if (VAR_6 < (ssize_t)sizeof(*VAR_5))
  return (-1);
 VAR_4->ir_usedlen = sizeof(*VAR_5);
 VAR_5 = (struct isns_hdr *)VAR_4->ir_buf;
 if (FUNC_0(VAR_5->ih_version) != VAR_2)
  return (-1);
 if ((FUNC_0(VAR_5->ih_flags) & (VAR_1 | VAR_0)) !=
     (VAR_1 | VAR_0))
  return (-1);
 VAR_7 = FUNC_0(VAR_5->ih_length);
 FUNC_1(VAR_4, VAR_7);
 VAR_6 = FUNC_2(VAR_3, &VAR_4->ir_buf[VAR_4->ir_usedlen], VAR_7);
 if (VAR_6 < VAR_7)
  return (-1);
 VAR_4->ir_usedlen += VAR_7;
 return (0);
}
