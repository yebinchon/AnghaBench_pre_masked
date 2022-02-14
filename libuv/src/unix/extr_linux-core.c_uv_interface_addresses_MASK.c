
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {void* netmask4; void* netmask6; } ;
struct TYPE_8__ {void* address4; void* address6; } ;
struct TYPE_12__ {char* name; int is_internal; int phys_addr; TYPE_2__ netmask; TYPE_1__ address; } ;
typedef TYPE_5__ uv_interface_address_t ;
struct sockaddr_ll {int sll_addr; } ;
typedef void* sockaddr_in6 ;
typedef void* sockaddr_in ;
struct ifaddrs {int ifa_flags; TYPE_4__* ifa_addr; int ifa_name; struct ifaddrs* ifa_next; TYPE_3__* ifa_netmask; } ;
struct TYPE_11__ {scalar_t__ sa_family; } ;
struct TYPE_10__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ifaddrs*) ;
 scalar_t__ FUNC_2 (struct ifaddrs**) ;
 int FUNC_3 (int ,int ,int) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int ,size_t) ;
 TYPE_5__* FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (struct ifaddrs*,int ) ;
 char* FUNC_8 (int ) ;

int FUNC_9(uv_interface_address_t** VAR_7, int* VAR_8) {

  *VAR_8 = 0;
  *VAR_7 = ((void*)0);
  return VAR_3;
}
