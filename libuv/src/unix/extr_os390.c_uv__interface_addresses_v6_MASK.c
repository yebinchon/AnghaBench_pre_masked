
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct TYPE_9__ {struct sockaddr_in address4; struct sockaddr_in6 address6; } ;
struct TYPE_11__ {int is_internal; int phys_addr; TYPE_1__ address; int name; } ;
typedef TYPE_3__ uv_interface_address_t ;
struct TYPE_12__ {int __nif6h_version; int __nif6h_buflen; int __nif6h_entrylen; scalar_t__ __nif6h_buffer; } ;
typedef TYPE_4__ __net_ifconf6header_t ;
struct TYPE_10__ {scalar_t__ sin6_family; } ;
struct TYPE_13__ {int __nif6e_flags; TYPE_2__ __nif6e_addr; int __nif6e_name; } ;
typedef TYPE_5__ __net_ifconf6entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ,TYPE_4__*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(uv_interface_address_t** VAR_9,
                                      int* VAR_10) {
  uv_interface_address_t* VAR_11;
  int VAR_12;
  int VAR_13;
  __net_ifconf6header_t VAR_14;
  __net_ifconf6entry_t* VAR_15;
  __net_ifconf6entry_t* VAR_16;
  __net_ifconf6entry_t VAR_17;

  *VAR_10 = 0;

  VAR_13 = 16384;

  if (0 > (VAR_12 = FUNC_3(VAR_0, VAR_4, VAR_2)))
    return FUNC_0(VAR_8);

  VAR_14.__nif6h_version = 1;
  VAR_14.__nif6h_buflen = VAR_13;
  VAR_14.__nif6h_buffer = FUNC_4(1, VAR_13);;

  if (FUNC_1(VAR_12, VAR_3, &VAR_14) == -1) {
    FUNC_5(VAR_12);
    return FUNC_0(VAR_8);
  }


  *VAR_10 = 0;
  VAR_15 = (__net_ifconf6entry_t*)(VAR_14.__nif6h_buffer);
  while ((char*)VAR_15 < (char*)VAR_14.__nif6h_buffer + VAR_14.__nif6h_buflen) {
    VAR_16 = VAR_15;
    VAR_15 = (__net_ifconf6entry_t*)((char*)VAR_15 + VAR_14.__nif6h_entrylen);

    if (!(VAR_16->__nif6e_addr.sin6_family == VAR_1 ||
          VAR_16->__nif6e_addr.sin6_family == VAR_0))
      continue;

    if (!(VAR_16->__nif6e_flags & VAR_7))
      continue;

    ++(*VAR_10);
  }


  *VAR_9 = FUNC_6(*VAR_10 * sizeof(uv_interface_address_t));
  if (!(*VAR_9)) {
    FUNC_5(VAR_12);
    return VAR_5;
  }
  VAR_11 = *VAR_9;

  VAR_15 = (__net_ifconf6entry_t*)(VAR_14.__nif6h_buffer);
  while ((char*)VAR_15 < (char*)VAR_14.__nif6h_buffer + VAR_14.__nif6h_buflen) {
    VAR_16 = VAR_15;
    VAR_15 = (__net_ifconf6entry_t*)((char*)VAR_15 + VAR_14.__nif6h_entrylen);

    if (!(VAR_16->__nif6e_addr.sin6_family == VAR_1 ||
          VAR_16->__nif6e_addr.sin6_family == VAR_0))
      continue;

    if (!(VAR_16->__nif6e_flags & VAR_7))
      continue;



    VAR_11->name = FUNC_7(VAR_16->__nif6e_name);

    if (VAR_16->__nif6e_addr.sin6_family == VAR_1)
      VAR_11->address.address6 = *((struct sockaddr_in6*) &VAR_16->__nif6e_addr);
    else
      VAR_11->address.address4 = *((struct sockaddr_in*) &VAR_16->__nif6e_addr);



    VAR_11->is_internal = VAR_17.__nif6e_flags & VAR_6 ? 1 : 0;
    FUNC_2(VAR_11->phys_addr, 0, sizeof(VAR_11->phys_addr));
    VAR_11++;
  }

  FUNC_5(VAR_12);
  return 0;
}
