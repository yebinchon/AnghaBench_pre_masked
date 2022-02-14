
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; double min_width; double min_height; int width_inc; int height_inc; double base_width; double base_height; scalar_t__ min_aspect_num; double min_aspect_den; scalar_t__ max_aspect_num; double max_aspect_den; int height; int width; int y; int x; int max_height; int max_width; } ;
typedef TYPE_1__ xcb_size_hints_t ;
typedef int xcb_get_property_reply_t ;
struct TYPE_9__ {int height; int width; int y; int x; } ;
typedef TYPE_2__ xcb_get_geometry_reply_t ;
struct TYPE_10__ {double min_width; double min_height; double max_width; double max_height; double width_increment; double height_increment; double base_width; double base_height; double min_aspect_ratio; double max_aspect_ratio; int id; } ;
typedef TYPE_3__ i3Window ;


 int FUNC_0 (double,double) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (double) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *) ;

bool FUNC_7(i3Window *VAR_11, xcb_get_property_reply_t *VAR_12, xcb_get_geometry_reply_t *VAR_13) {
    bool VAR_14 = 0;
    xcb_size_hints_t VAR_15;


    bool VAR_16;
    if (VAR_12 != ((void*)0)) {
        VAR_16 = FUNC_6(&VAR_15, VAR_12);
    } else {
        VAR_16 = FUNC_4(VAR_10, FUNC_5(VAR_10, VAR_11->id), &VAR_15, ((void*)0));
    }
    if (!VAR_16) {
        FUNC_1("Could not get WM_NORMAL_HINTS\n");
        return 0;
    }
    if ((VAR_15.flags & VAR_4)) {
        FUNC_1("Minimum size: %d (width) x %d (height)\n", VAR_15.min_width, VAR_15.min_height);

        do { if (VAR_11->min_width != VAR_15.min_width) { VAR_11->min_width = VAR_15.min_width; VAR_14 = 1; } } while (0);
        do { if (VAR_11->min_height != VAR_15.min_height) { VAR_11->min_height = VAR_15.min_height; VAR_14 = 1; } } while (0);
    }

    if ((VAR_15.flags & VAR_3)) {
        FUNC_1("Maximum size: %d (width) x %d (height)\n", VAR_15.max_width, VAR_15.max_height);

        int VAR_17 = FUNC_3(0, VAR_15.max_width);
        int VAR_18 = FUNC_3(0, VAR_15.max_height);

        do { if (VAR_11->max_width != VAR_17) { VAR_11->max_width = VAR_17; VAR_14 = 1; } } while (0);
        do { if (VAR_11->max_height != VAR_18) { VAR_11->max_height = VAR_18; VAR_14 = 1; } } while (0);
    } else {
        FUNC_1("Clearing maximum size \n");

        do { if (VAR_11->max_width != 0) { VAR_11->max_width = 0; VAR_14 = 1; } } while (0);
        do { if (VAR_11->max_height != 0) { VAR_11->max_height = 0; VAR_14 = 1; } } while (0);
    }

    if ((VAR_15.flags & VAR_6)) {
        FUNC_1("Size increments: %d (width) x %d (height)\n", VAR_15.width_inc, VAR_15.height_inc);

        if (VAR_15.width_inc > 0 && VAR_15.width_inc < 0xFFFF) {
            do { if (VAR_11->width_increment != VAR_15.width_inc) { VAR_11->width_increment = VAR_15.width_inc; VAR_14 = 1; } } while (0);
        } else {
            do { if (VAR_11->width_increment != 0) { VAR_11->width_increment = 0; VAR_14 = 1; } } while (0);
        }

        if (VAR_15.height_inc > 0 && VAR_15.height_inc < 0xFFFF) {
            do { if (VAR_11->height_increment != VAR_15.height_inc) { VAR_11->height_increment = VAR_15.height_inc; VAR_14 = 1; } } while (0);
        } else {
            do { if (VAR_11->height_increment != 0) { VAR_11->height_increment = 0; VAR_14 = 1; } } while (0);
        }
    } else {
        FUNC_1("Clearing size increments\n");

        do { if (VAR_11->width_increment != 0) { VAR_11->width_increment = 0; VAR_14 = 1; } } while (0);
        do { if (VAR_11->height_increment != 0) { VAR_11->height_increment = 0; VAR_14 = 1; } } while (0);
    }


    if (VAR_15.flags & VAR_1 &&
        (VAR_11->base_width >= 0) && (VAR_11->base_height >= 0)) {
        FUNC_1("Base size: %d (width) x %d (height)\n", VAR_15.base_width, VAR_15.base_height);

        do { if (VAR_11->base_width != VAR_15.base_width) { VAR_11->base_width = VAR_15.base_width; VAR_14 = 1; } } while (0);
        do { if (VAR_11->base_height != VAR_15.base_height) { VAR_11->base_height = VAR_15.base_height; VAR_14 = 1; } } while (0);
    } else {
        FUNC_1("Clearing base size\n");

        do { if (VAR_11->base_width != 0) { VAR_11->base_width = 0; VAR_14 = 1; } } while (0);
        do { if (VAR_11->base_height != 0) { VAR_11->base_height = 0; VAR_14 = 1; } } while (0);
    }

    if (VAR_13 != ((void*)0) &&
        (VAR_15.flags & VAR_8 || VAR_15.flags & VAR_5) &&
        (VAR_15.flags & VAR_9 || VAR_15.flags & VAR_7)) {
        FUNC_1("Setting geometry x=%d y=%d w=%d h=%d\n", VAR_15.x, VAR_15.y, VAR_15.width, VAR_15.height);
        VAR_13->x = VAR_15.x;
        VAR_13->y = VAR_15.y;
        VAR_13->width = VAR_15.width;
        VAR_13->height = VAR_15.height;
    }


    if (VAR_15.flags & VAR_2 &&
        (VAR_15.min_aspect_num >= 0) && (VAR_15.min_aspect_den > 0) &&
        (VAR_15.max_aspect_num >= 0) && (VAR_15.max_aspect_den > 0)) {

        double VAR_19 = (double)VAR_15.min_aspect_num / VAR_15.min_aspect_den;
        double VAR_20 = (double)VAR_15.max_aspect_num / VAR_15.max_aspect_den;
        FUNC_1("Aspect ratio set: minimum %f, maximum %f\n", VAR_19, VAR_20);
        if (FUNC_2(VAR_11->min_aspect_ratio - VAR_19) > VAR_0) {
            VAR_11->min_aspect_ratio = VAR_19;
            VAR_14 = 1;
        }
        if (FUNC_2(VAR_11->max_aspect_ratio - VAR_20) > VAR_0) {
            VAR_11->max_aspect_ratio = VAR_20;
            VAR_14 = 1;
        }
    } else {
        FUNC_1("Clearing aspect ratios\n");

        do { if (VAR_11->min_aspect_ratio != 0.0) { VAR_11->min_aspect_ratio = 0.0; VAR_14 = 1; } } while (0);
        do { if (VAR_11->max_aspect_ratio != 0.0) { VAR_11->max_aspect_ratio = 0.0; VAR_14 = 1; } } while (0);
    }

    return VAR_14;
}
