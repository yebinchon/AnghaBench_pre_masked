
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_map_request {scalar_t__ offset; scalar_t__ length; int memattr; int size; } ;
struct resource_map {int * r_vaddr; scalar_t__ r_bushandle; scalar_t__ r_size; int r_bustag; } ;
struct resource {int dummy; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;
typedef scalar_t__ bus_space_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct resource_map_request*,struct resource_map_request*,int ) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct resource_map_request*) ;
 scalar_t__ FUNC_4 (struct resource*) ;
 int FUNC_5 (struct resource*) ;
 scalar_t__ FUNC_6 (struct resource*) ;
 scalar_t__ FUNC_7 (struct resource*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5, device_t VAR_6, int VAR_7, struct resource *VAR_8,
    struct resource_map_request *VAR_9, struct resource_map *VAR_10)
{
 struct resource_map_request VAR_11;
 rman_res_t VAR_12, VAR_13, VAR_14;


 if (!(FUNC_5(VAR_8) & VAR_2))
  return (VAR_1);


 switch (VAR_7) {
 case 129:
 case 128:
  break;
 default:
  return (VAR_0);
 }

 FUNC_3(&VAR_11);
 if (VAR_9 != ((void*)0))
  FUNC_0(VAR_9, &VAR_11, FUNC_1(VAR_9->size, VAR_11.size));
 VAR_14 = FUNC_7(VAR_8) + VAR_11.offset;
 if (VAR_11.length == 0)
  VAR_13 = FUNC_6(VAR_8);
 else
  VAR_13 = VAR_11.length;
 VAR_12 = VAR_14 + VAR_13 - 1;
 if (VAR_14 > FUNC_4(VAR_8) || VAR_14 < FUNC_7(VAR_8))
  return (VAR_0);
 if (VAR_12 > FUNC_4(VAR_8) || VAR_12 < VAR_14)
  return (VAR_0);




 switch (VAR_7) {
 case 129:
  VAR_10->r_bushandle = VAR_14;
  VAR_10->r_bustag = VAR_3;
  VAR_10->r_size = VAR_13;
  VAR_10->r_vaddr = ((void*)0);
  break;
 case 128:
  VAR_10->r_vaddr = FUNC_2(VAR_14, VAR_13, VAR_11.memattr);
  VAR_10->r_bustag = VAR_4;
  VAR_10->r_size = VAR_13;




  VAR_10->r_bushandle = (bus_space_handle_t)VAR_10->r_vaddr;
  break;
 }
 return (0);
}
